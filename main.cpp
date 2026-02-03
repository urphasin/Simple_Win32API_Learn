#include <iostream>
#include <windows.h>

// Window procedure: handles messages
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CLOSE:
            DestroyWindow(hwnd);
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}