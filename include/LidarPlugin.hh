#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo
{
    class LidarPlugin : public ModelPlugin
    {
    public:
        LidarPlugin();
        virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);
    };    
};