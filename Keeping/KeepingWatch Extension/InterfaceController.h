//
//  InterfaceController.h
//  KeepingWatch Extension
//
//  Created by 宋 奎熹 on 2017/10/19.
//  Copyright © 2017年 宋 奎熹. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController

@property (weak, nonatomic, nullable) IBOutlet WKInterfaceLabel *taskProgressLabel;
@property (weak, nonatomic, nullable) IBOutlet WKInterfaceTable *taskTable;

@end
