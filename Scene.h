//
// Created by Jackson Hall on 4/27/2020.
//

#ifndef PART_2___GRAPHICS_ALTERNATE_SCENE_H
#define PART_2___GRAPHICS_ALTERNATE_SCENE_H

#include "Camera.h"
#include "Object.h"
#include "Camera3D.h"
#include "Camera4D.h"
#include "Object3D.h"
#include "Object4D.h"


class Scene {
public:
    static const int DEFAULT_WINDOW_WIDTH;
    static const int DEFAULT_WINDOW_HEIGHT;
    static const double DEFAULT_OBJECT_COLOR_RGB[3];

    /** Constructors */
    Scene();
    Scene(const std::vector<Object3D>& object3ds,
        const std::vector<Object4D>& object4ds);
    Scene(const Camera3D& camera3d,
        const Camera4D& camera4d,
        const std::vector<Object3D>& object3ds,
        const std::vector<Object4D>& object4ds);

    /** Getters */
    /* Utility */
    bool getActiveCamera() const;
    Camera3D& getCamera3D();
    Camera4D& getCamera4D();
    std::vector<Object3D> const& getObjects3d() const;
    std::vector<Object4D> const& getObjects4d() const;

    /** Other Methods */
    void addObject(const Object3D& obj);
    void addObject(const Object4D& obj);
    void toggleActiveCamera();
    void draw() const;

protected:
    bool activeCamera; // True = 3d camera, false = 4d camera
    Camera3D camera3d;
    Camera4D camera4d;
    std::vector<Object3D> objects3d;
    std::vector<Object4D> objects4d;
//    std::vector<Object *> objects;
};


#endif //PART_2___GRAPHICS_ALTERNATE_SCENE_H
