//
//  TLGroup.h
//  TLChat
//
//  Created by 李伯坤 on 16/3/7.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLBaseDataModel.h"
#import "TLUser.h"

@interface TLGroup : TLBaseDataModel

/**
 *  讨论组名称
 */
@property (nonatomic, strong) NSString *groupName;


@property (nonatomic, strong) NSString *groupAvatarPath;

/**
 *  讨论组ID
 */
@property (nonatomic, strong) NSString *groupID;

/**
 *  讨论组成员
 */
@property (nonatomic, strong) NSMutableArray *users;

/**
 *  群公告
 */
@property (nonatomic, strong) NSString *post;

/**
 *  我的群昵称
 */
@property (nonatomic, strong) NSString *myNikeName;

@property (nonatomic, strong) NSString *pinyin;

@property (nonatomic, strong) NSString *pinyinInitial;

@property (nonatomic, assign, readonly) NSInteger count;

- (void)addObject:(id)anObject;

- (id)objectAtIndex:(NSUInteger)index;

@end