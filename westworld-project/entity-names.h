/**
 * Define the entity names to use
 */
#ifndef ENTITY_NAMES_H
#define ENTITY_NAMES_H

#include <string>

enum {
    ent_miner_bob,
    ent_elsa
};

inline std::string get_name_entity(int n) {
    switch (n)
    {
    case ent_miner_bob:
        return "Miner Bob";

    case ent_elsa:
        return "Elsa";
    default:
        return "Unknown";
    }
}

#endif