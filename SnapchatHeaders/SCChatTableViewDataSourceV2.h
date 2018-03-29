//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, SCChatViewModelForChat, UIViewController;
@protocol SCChatCellGestureDelegate><SCChatFullscreenMediaChatTableCellDelegate><SCChatCellMessageStateUpdateDelegate;

@interface SCChatTableViewDataSourceV2 : NSObject <SCTimeProfilable, UITableViewDataSource>
{
    double _lastXOffset;
    SCChatViewModelForChat *_chatViewModel;
    UIViewController<SCChatCellGestureDelegate><SCChatFullscreenMediaChatTableCellDelegate><SCChatCellMessageStateUpdateDelegate> *_parentVC;
}

+ (int)context;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setLastXOffset:(double)arg1;
- (void)setChatViewModel:(id)arg1;
- (id)initWithParentVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

