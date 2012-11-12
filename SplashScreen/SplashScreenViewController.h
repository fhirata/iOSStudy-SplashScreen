//
//  SplashScreenViewController.h
//  SplashScreen
//
//  Created by Fabio Hideki Hirata on 11/11/12.
//  Copyright (c) 2012 Fabio Hideki Hirata. All rights reserved.
//
// Device icon
//
// iPhone/iPod touch without Retina display: 57x57 pixels
// iPhone/iPod touch with Retina display: 114x114 pixels
// iPad: 72x72 pixels
//
// Device splashscreen
//
// iPhone/iPod touc without Retina display: 320x480 pixels
// iPhone/iPod touch with Retina display: 640x960 pixels
// iPad: 1024x768 pixels
//
// Notes:
// -Take larger size and set it as the height/width above, fill the rest with the background color
// -Need to copy the images into the Project folders
// -Splash screen should not use company logo, otherwise splash screen will flash faster and faster
// with newer devices and it will seem like a bug.

#import <UIKit/UIKit.h>

@interface SplashScreenViewController : UIViewController

-(IBAction)exitSplashScreen:(id)sender;

@end
