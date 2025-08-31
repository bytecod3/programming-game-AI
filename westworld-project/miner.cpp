#include "miner.h"

void Miner::update() {
    m_thirst += 1;

    if(m_current_state) {
        m_current_state->execute(this);
    }
}