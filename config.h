static void dwindle(Monitor *m);
static void master(Monitor *m);
static void monocle(Monitor *m);

static const Layout layouts[] = {
    {"><>", NULL},
    {"[T]", dwindle},
    {"[M]", master},
    {"[]", monocle},
};
