/******************************************************
 * Copyright (c) 2024 Diego Antonio López López       *
 *               diego.a.lopez@udc.es                 *
 *               Alejandro Rodríguez Vaquero          *
 *               a.vaquero@udc.es                     *
 *                                                    *
 * This code is for the IGM course assignment         *
 * in OpenSceneGraph                                  *
 * from the MUEI "Universidade da Coruña"             *
 * to the date 03-04-2024 and is free to use          *
 * and distribute.                                    *
 ******************************************************/

#include <osg/Geode>
#include <osg/Group>
#include <osg/ShapeDrawable>
#include <osgViewer/Viewer>

int main(int argc, char** argv) {
    // Create a root node
    osg::ref_ptr<osg::Group> root = new osg::Group;

    // Create a geode to hold the cube shape
    osg::ref_ptr<osg::Geode> geode = new osg::Geode;
    
    // Create a cube shape
    osg::ref_ptr<osg::Box> box = new osg::Box(osg::Vec3(0, 0, 0), 1.0f);
    osg::ref_ptr<osg::ShapeDrawable> shapeDrawable = new osg::ShapeDrawable(box);

    // Set the color of the cube
    osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array;
    colors->push_back(osg::Vec4(1.0f, 0.0f, 0.0f, 1.0f)); // Red color
    shapeDrawable->setColorArray(colors);
    shapeDrawable->setColorBinding(osg::Geometry::BIND_OVERALL);

    // Add the shape to the geode
    geode->addDrawable(shapeDrawable);

    // Add the geode to the root node
    root->addChild(geode);

    // Create a viewer
    osgViewer::Viewer viewer;
    
    // Set the scene data
    viewer.setSceneData(root);

    // Run the viewer
    return viewer.run();
}
