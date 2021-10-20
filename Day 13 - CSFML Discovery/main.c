#include <SFML/Graphics.h>

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {800, 600, 32};
    sfEvent event;

    window = sfRenderWindow_create(mode, "task01 window", sfDefaultStyle, NULL);
    
    return (0);
}
