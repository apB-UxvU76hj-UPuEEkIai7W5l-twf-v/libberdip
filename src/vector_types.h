typedef union v2 {
    struct {
        f32 x;
        f32 y;
    };
    f32 e[2];
} v2;

typedef union v2s {
    struct {
        s32 x;
        s32 y;
    };
    s32 e[2];
} v2s;

typedef union v2u {
    struct {
        u32 x;
        u32 y;
    };
    u32 e[2];
} v2u;

typedef union v3 {
    struct {
        union {
            struct {
                f32 x;
                f32 y;
            };
            v2 xy;
        };
        f32 z;
    };
    f32 e[3];
} v3;

typedef union v3s {
    struct {
        union {
            struct {
                s32 x;
                s32 y;
            };
            v2s xy;
        };
        s32 z;
    };
    s32 e[3];
} v3s;

typedef union v3u {
    struct {
        union {
            struct {
                u32 x;
                u32 y;
            };
            v2u xy;
        };
        u32 z;
    };
    u32 e[3];
} v3u;

typedef union v4 {
    struct {
        union {
            struct {
                union {
                    struct {
                        f32 x;
                        f32 y;
                    };
                    v2 xy;
                };
                f32 z;
            };
            v3 xyz;
        };
        f32 w;
    };
    struct {
        union {
            struct {
                f32 r;
                f32 g;
                f32 b;
            };
            v3 rgb;
        };
        f32 a;
    };
    f32 e[4];
} v4;

typedef union v4s {
    struct {
        union {
            struct {
                union {
                    struct {
                        s32 x;
                        s32 y;
                    };
                    v2s xy;
                };
                s32 z;
            };
            v3s xyz;
        };
        s32 w;
    };
    struct {
        union {
            struct {
                s32 r;
                s32 g;
                s32 b;
            };
            v3s rgb;
        };
        s32 a;
    };
    s32 e[4];
} v4s;

typedef union v4u {
    struct {
        union {
            struct {
                union {
                    struct {
                        u32 x;
                        u32 y;
                    };
                    v2u xy;
                };
                u32 z;
            };
            v3u xyz;
        };
        u32 w;
    };
    struct {
        union {
            struct {
                u32 r;
                u32 g;
                u32 b;
            };
            v3u rgb;
        };
        u32 a;
    };
    u32 e[4];
} v4u;

typedef struct Rectangle2
{
    v2 min;
    v2 max;
} Rectangle2;

typedef struct Rectangle2s
{
    v2s min;
    v2s max;
} Rectangle2s;

typedef struct Rectangle2u
{
    v2u min;
    v2u max;
} Rectangle2u;