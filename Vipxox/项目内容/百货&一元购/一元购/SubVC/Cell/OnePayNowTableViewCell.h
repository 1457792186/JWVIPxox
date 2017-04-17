//
//  OnePayNowTableViewCell.h
//  Vipxox
//
//  Created by Tian Wei You on 16/8/1.
//  Copyright © 2016年 拥吻汇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OnePayNowTableViewCell : UITableViewCell

@property(nonatomic,copy)void(^allPayBlock)();

@property (weak, nonatomic) IBOutlet UIButton *payAllBtn;

@property (weak, nonatomic) IBOutlet UILabel *allPriceLabel;

@end
