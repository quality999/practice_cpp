
/**
int i;

extern int a; //声明未定义

extern int func1(int length, int width);

**/

extern int i;
extern float f(float);
float b;

float f(float a) 
{
    return a + 1.0;
}

int i;
int h(int x) {
    return x + 1;
}

int main() {
    b = 1.0;
    i = 2;
    f(b);
    h(i);
} //
