//
//  ArticleViewController.h
//  45Navi
//
//  Created by yoshiki on 2014/11/15.
//  Copyright (c) 2014年 45Navi Team. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ArticleViewDelegate <NSObject>
-(void)gotoNavigation;
@end

@interface ArticleViewController : UIViewController<ArticleViewDelegate>

@end
