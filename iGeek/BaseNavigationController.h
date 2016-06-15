//
//  BaseNavigationController.h
//  iGeek
//
//  Created by garyxuan on 16/5/19.
//  Copyright © 2016年 garyxuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseNavigationController : UINavigationController
@property(nonatomic,weak,readonly) UIView *customNavBar;//自定义的NavBar
@property (nonatomic,weak) UIView *rightView;//自定义的NavBar的右边，可自定义控件
@end
