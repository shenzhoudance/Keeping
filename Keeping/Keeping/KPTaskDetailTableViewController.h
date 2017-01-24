//
//  KPTaskDetailTableViewController.h
//  Keeping
//
//  Created by 宋 奎熹 on 2017/1/20.
//  Copyright © 2017年 宋 奎熹. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"
#import "KPSchemeTableViewController.h"
#import "KPReminderViewController.h"

@interface KPTaskDetailTableViewController : UITableViewController <SchemeDelegate, ReminderDelegate,  UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate>

@property (nullable, nonatomic) Task *task;

@property (nonnull, nonatomic) IBOutlet UITextField *taskNameField;

@property (nonnull, nonatomic) IBOutlet UIStackView *weekDayStack;
@property (nonnull, nonatomic) IBOutlet UIButton *allButton;
@property (nonnull, nonatomic) NSMutableArray *selectedWeekdayArr;

@property (nonnull, nonatomic) IBOutlet UILabel *reminderLabel;
@property (nonnull, nonatomic) IBOutlet UISwitch *reminderSwitch;
@property (nonatomic, nullable) NSDate *reminderTime;

@property (nonnull, nonatomic) IBOutlet UILabel *appNameLabel;
@property (nonatomic, nullable) NSDictionary *selectedApp;

@property (nonnull, nonatomic) IBOutlet UIImageView *selectedImgView;
@property (nonnull, nonatomic) UIImagePickerController* picker_library_;
@property (nonnull, nonatomic) IBOutlet UIStackView *imgButtonStack;
@property (nonnull, nonatomic) IBOutlet UIButton *addImgButton;
@property (nonnull, nonatomic) IBOutlet UIButton *viewImgButton;
@property (nonnull, nonatomic) IBOutlet UIButton *deleteImgButton;

@property (nonnull, nonatomic) IBOutlet UITextField *linkTextField;

@end