
#include "base/game.h"
#include "base/inputmanager.h"
#include "world/ship.h"
#include "load_prc_file.h"

namespace pirates {

using world::Ship;

namespace base {

Game* Game::reference_ = NULL;

void Game::Init (int &argc, char **&argv) {
    framework_.open_framework(argc, argv);
    framework_.set_window_title("Pirates by USPGameDev");
    window_ = framework_.open_window();
    load_prc_file_data("", "model-path .");
    camera_node_ = window_->get_camera_group();
    InputManager::reference()->Init();
    window_->setup_trackball();
    Ship* ship = new Ship();
    ship->taskInitialize(taskMgr());
}

} // namespace base
} // namespace pirates
