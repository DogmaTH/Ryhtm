import pygame
from src.note import Note

class Game:
    def __init__(self):
        self.WIDTH = 800
        self.HEIGHT = 600
        self.window = pygame.display.set_mode((self.WIDTH, self.HEIGHT))
        pygame.display.set_caption("Juego Rítmico")

        self.clock = pygame.time.Clock()
        self.notes = []
        self.running = True

        # zona de impacto
        self.hit_zone = pygame.Rect(100, 250, 50, 100)

    def run(self):
        while self.running:
            dt = self.clock.tick(60) / 1000

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    self.running = False

            # actualizar notas
            for n in self.notes:
                n.update(dt)

            # dibujar
            self.window.fill((30, 30, 30))
            pygame.draw.rect(self.window, (0, 200, 255), self.hit_zone)
            for n in self.notes:
                n.draw(self.window)

            pygame.display.flip()

        pygame.quit()
