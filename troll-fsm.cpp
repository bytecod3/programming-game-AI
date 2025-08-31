
class Troll {
    State* m_current_state;

    public:
        void update() {
            m_current_state->Execute(this);
        }

        void change_state(State* p_new_state) {
            delete m_current_state;
            m_current_state = p_new_state;
        }
};

// abstract class as the base class for different states
class State {
    public: 
        virtual void Execute(Troll* troll) = 0;
};

// derived class of the State base class
