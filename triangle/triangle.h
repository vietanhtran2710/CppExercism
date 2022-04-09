#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    namespace flavor {
        const int equilateral = 1;
        const int isosceles = 2;
        const int scalene = 3;
    }

    int kind(float, float, float);

}  // namespace triangle

#endif // TRIANGLE_H