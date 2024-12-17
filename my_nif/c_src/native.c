#include "erl_nif.h"

// Function to add two numbers
static ERL_NIF_TERM add(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    int a, b;
    if (!enif_get_int(env, argv[0], &a) || !enif_get_int(env, argv[1], &b)) {
        return enif_make_badarg(env);
    }
    return enif_make_int(env, a + b);
}

// NIF function list
static ErlNifFunc nif_funcs[] = {
    {"add", 2, add}  // {name_in_elixir, arity, c_function}
};

// Initialize NIF
ERL_NIF_INIT(Elixir.MyNif, nif_funcs, NULL, NULL, NULL, NULL)