//
//  AppDelegate.h
//  EMVCardReader
//
//  Created by Boris  on 10/17/14.
//  Copyright (c) 2014 LLT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "FJAudioPlayer.h"
#import "MainViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    MainViewController *mvc;
}

- (FJAudioPlayer *)getFJAudioPlayer;

@property (strong, nonatomic) UIWindow          *window;

@end

