class BaseGameEntity {

    private:
        int m_id; //every entity has a unique identifying number
        static int m_next_valid_id;
        void set_id(int val); 

    public:
        BaseGameEntity(int id) {
            set_id(id);
        }

        // destructor 
        virtual ~BaseGameEntity() {}

        // all entities must implement an update function 
        virtual void update() = 0;

        int id() const {
            return m_id;
        }

};