//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol SCChatViewModelListener <NSObject>

@optional
- (void)didShouldShowGreetingStickerStateChange:(_Bool)arg1;
- (void)didViewModelsChange;
- (void)stackedViewModel:(NSIndexPath *)arg1 didChildrenChangeAt:(NSArray *)arg2;
- (void)didMessagesDeleteAtIndexPaths:(NSArray *)arg1;
- (void)didMessagesAddAtIndexPaths:(NSArray *)arg1;
- (void)didMessagesChangeAtIndexPaths:(NSArray *)arg1;
- (void)willViewModelsChange;
@end
