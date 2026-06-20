import tkinter as tk
import random
import os


class JednorekiBandyta:
    def __init__(self, root):
        self.root = root
        self.root.title("Jednoręki Bandyta")
        self.root.geometry("400x350")
        self.root.configure(bg="#2c3e50")

        # plik zapisu
        self.nazwa_pliku = "save.txt"

        # symbole
        self.symbole = ['🍒', '🍋', '🔔', '⭐', '💎']
        self.aktualne_znaki = ['❓', '❓', '❓']

        # Wczytanie punktów z pliku
        self.suma_wygranych = self.wczytaj_punkty()

        self.czy_losuje = False
        self.animacja_id = None

        self.stworz_interfejs()

    def wczytaj_punkty(self):
        if not os.path.exists(self.nazwa_pliku):
            # Jeśli plik nie istnieje twoży plik z wartością 0
            with open(self.nazwa_pliku, "w", encoding="utf-8") as plik:
                plik.write("0")
            return 0
        else:
            # Jeśli plik istnieje czyta wartość
            try:
                with open(self.nazwa_pliku, "r", encoding="utf-8") as plik:
                    zawartosc = plik.read().strip()
                    return int(zawartosc) if zawartosc else 0
            except ValueError:
                # W razie problemu przyznaje 0 punktow na start
                return 0

    def zapisz_punkty(self):
        with open(self.nazwa_pliku, "w", encoding="utf-8") as plik:
            plik.write(str(self.suma_wygranych))

        # Informacja zwrotna
        if not self.czy_losuje:
            self.wynik_label.config(text=f"Stan gry został zapisany!\nSuma wygranych: {self.suma_wygranych}",
                                    fg="#3498db")

    def stworz_interfejs(self):
        self.tytul_label = tk.Label(self.root, text="Jednoręki Bandyta", font=("Helvetica", 20, "bold"), bg="#2c3e50",
                                    fg="white")
        self.tytul_label.pack(pady=10)

        self.znaki_label = tk.Label(self.root, text="❓ ❓ ❓", font=("Helvetica", 50), bg="#2c3e50", fg="yellow")
        self.znaki_label.pack(pady=20)

        # pokazuje: "suma wygranych"
        self.wynik_label = tk.Label(self.root, text=f"Suma wygranych: {self.suma_wygranych}", font=("Helvetica", 16),
                                    bg="#2c3e50", fg="white")
        self.wynik_label.pack(pady=10)

        # ramka na przyciski
        self.ramka_przyciskow = tk.Frame(self.root, bg="#2c3e50")
        self.ramka_przyciskow.pack(pady=20)

        # Przycisk "Zapisz" po lewej stronie
        self.zapisz_button = tk.Button(self.ramka_przyciskow, text="Zapisz", font=("Helvetica", 16, "bold"),
                                       bg="#34495e", fg="white", width=10, command=self.zapisz_punkty)
        self.zapisz_button.pack(side=tk.LEFT, padx=10)

        # Wspólny przycisk dla "Graj" po prawej stronie
        self.button_graj = tk.Button(self.ramka_przyciskow, text="Graj", font=("Helvetica", 16, "bold"), bg="#27ae60",
                                     fg="white", width=10, command=self.rozpocznij_losowanie)
        self.button_graj.pack(side=tk.RIGHT, padx=10)

    def rozpocznij_losowanie(self):
        if not self.czy_losuje:
            self.czy_losuje = True

            # Blok zapisu podczas losowania
            self.zapisz_button.config(state=tk.DISABLED)

            self.button_graj.config(text="Stop", bg="#e74c3c", command=self.zatrzymaj_losowanie)
            self.wynik_label.config(text=f"Losowanie...\nSuma wygranych: {self.suma_wygranych}", fg="white")
            self.animuj_znaki()

    def animuj_znaki(self):
        if self.czy_losuje:
            # losuje symbole
            self.aktualne_znaki = [random.choice(self.symbole) for _ in range(3)]
            # wyświetla znaki
            self.znaki_label.config(text=f"{self.aktualne_znaki[0]} {self.aktualne_znaki[1]} {self.aktualne_znaki[2]}")
            # Zapętla animację co 100ms i zapisuje ID animacji żeby ją zatrzymać
            self.animacja_id = self.root.after(100, self.animuj_znaki)

    def zatrzymaj_losowanie(self):
        if self.czy_losuje:
            self.czy_losuje = False

            if self.animacja_id:
                # zatrzymnanie animacji
                self.root.after_cancel(self.animacja_id)

            # odblokowanie zapisu
            self.zapisz_button.config(state=tk.NORMAL)

            self.button_graj.config(text="Graj", bg="#27ae60", command=self.rozpocznij_losowanie)

            wygrana = self.sprawdz_wygrana(self.aktualne_znaki)
            self.suma_wygranych += wygrana

            if wygrana > 0:
                self.wynik_label.config(
                    text=f"Wygrywasz: {wygrana}!\nSuma wygranych: {self.suma_wygranych}",
                    fg="#2ecc71"
                )
            else:
                self.wynik_label.config(
                    text=f"Brak wygranej.\nSuma wygranych: {self.suma_wygranych}",
                    fg="white"
                )

    def sprawdz_wygrana(self, wylosowane):

        # Trzy takie same = 50
        if wylosowane[0] == wylosowane[1] == wylosowane[2]:
            return 50
        # Dwa takie same = 10
        elif wylosowane[0] == wylosowane[1] or wylosowane[1] == wylosowane[2] or wylosowane[0] == wylosowane[2]:
            return 10
        # Brak takich samych = 0
        else:
            return 0


if __name__ == "__main__":
    okno = tk.Tk()
    gra = JednorekiBandyta(okno)
    okno.mainloop()