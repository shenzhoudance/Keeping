//
//  KPTodayTableViewCell.h
//  Keeping
//
//  Created by 宋 奎熹 on 2017/1/17.
//  Copyright © 2017年 宋 奎熹. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BEMCheckBox.h"

@protocol CheckTaskDelegate <NSObject>

- (void)checkTask:(UITableViewCell *_Nonnull)cell;

- (void)moreAction:(UITableViewCell *_Nonnull)cell withButton:(UIButton *_Nonnull)button;

@end

@interface KPTodayTableViewCell : UITableViewCell <BEMCheckBoxDelegate>

@property (nonatomic, nonnull) id<CheckTaskDelegate> delegate;
//任务名
@property (nonatomic, nonnull) IBOutlet UILabel *taskNameLabel;
//提醒时间
@property (nonatomic, nonnull) IBOutlet UILabel *reminderLabel;
//打钩
@property (nonnull, nonatomic) IBOutlet BEMCheckBox *myCheckBox;


//更多 按钮
@property (nonnull, nonatomic) IBOutlet UIButton *moreButton;
//小图片提示
@property (nonnull, nonatomic) IBOutlet UIImageView *appImg;
@property (nonnull, nonatomic) IBOutlet UIImageView *linkImg;
@property (nonnull, nonatomic) IBOutlet UIImageView *imageImg;
//子 cardview
@property (nonnull, nonatomic) IBOutlet UIView *cardView2;
//APP 按钮
@property (nonnull, nonatomic) IBOutlet UIButton *appButton;    //tag = 0
//链接 按钮
@property (nonnull, nonatomic) IBOutlet UIButton *linkButton;   //tag = 1
//图片 按钮
@property (nonnull, nonatomic) IBOutlet UIButton *imageButton;  //tag = 2

- (void)setIsFinished:(BOOL)isFinished;

- (void)setFont;

@end