//
//  DepartmentCommitListViewController.h
//  Vipxox
//
//  Created by 黄佳峰 on 16/8/11.
//  Copyright © 2016年 拥吻汇. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailCommitModel.h"

@interface DepartmentCommitListViewController : UIViewController

@property(nonatomic,strong)NSString*pid;  //吊接口用 得到所有评论
@property(nonatomic,strong)NSString*howmuchCommit;  //多少条评论

@end
