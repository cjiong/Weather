//
//  AppDelegate.h
//  Weather
//
//  Created by 陈炯 on 2017/7/16.
//  Copyright © 2017年 Jiong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

