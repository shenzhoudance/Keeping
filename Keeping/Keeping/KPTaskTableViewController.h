//
//  KPTaskTableViewController.h
//  Keeping
//
//  Created by 宋 奎熹 on 2017/1/17.
//  Copyright © 2017年 宋 奎熹. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KPTaskTableViewController : UITableViewController

@property (nonnull, nonatomic) NSMutableArray *taskArr;

- (void)addAction:(_Nonnull id)senders;

@end
