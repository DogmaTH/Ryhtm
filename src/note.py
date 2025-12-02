import pygame

class Note:
    def __init__(self, x, y, speed=200):
        self.x = x
        self.y = y
        self.speed = speed
        self.rect = pygame.Rect(self.x, self.y, 30, 30)

    def update(self, dt):
        self.x -= self.speed * dt
        self.rect.topleft = (self.x, self.y)

    def draw(self, surface):
        pygame.draw.rect(surface, (255, 50, 50), self.rect)
