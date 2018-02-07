#include <assert.h>
#include <stdint.h>

int main() {
    volatile uint16_t blub = 0x4000;
    volatile float blah = (float)(int16_t)(blub << 1);
    assert (blah == -32768.0);
    return 0;
}
