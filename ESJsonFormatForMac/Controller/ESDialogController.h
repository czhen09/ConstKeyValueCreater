//
//  ESDialogController.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ESDialogController : NSWindowController
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *className;
@property (nonatomic, assign) BOOL objIsKindOfArray;
@property (nonatomic, copy) void (^enterBlock)(NSString *className);


-(void)setDataWithMsg:(NSString *)msg defaultClassName:(NSString *)className enter:(void(^)(NSString *className))enterBlock;

@end
