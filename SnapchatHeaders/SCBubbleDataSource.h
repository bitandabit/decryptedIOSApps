//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SCBubbleGestureHandlerV3, UIViewController;
@protocol SCBubbleDataSourceDelegate, SCChatCellGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate><SCChatCellStackGestureDelegate;

@interface SCBubbleDataSource : NSObject <UITableViewDataSource>
{
    id <SCBubbleDataSourceDelegate> _delegate;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    NSMutableArray *_messageViewModels;
    NSTimer *_expirationTimer;
    _Bool _expiring;
    id <SCChatFullscreenMediaChatTableCellDelegate><SCChatCellStackGestureDelegate> _cellDelegate;
    SCBubbleGestureHandlerV3 *_gestureHandler;
}

@property(readonly, nonatomic) SCBubbleGestureHandlerV3 *gestureHandler; // @synthesize gestureHandler=_gestureHandler;
@property(nonatomic) __weak id <SCChatFullscreenMediaChatTableCellDelegate><SCChatCellStackGestureDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)setExpirationCompleted;
- (_Bool)isExpiring;
- (void)expirationTimerDidFire:(id)arg1;
- (void)resetExpirationTimerForViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)indexPathForMessage:(id)arg1;
- (id)indexPathForViewModel:(id)arg1;
- (id)viewModelAtIndex:(long long)arg1;
- (long long)viewModelCount;
- (id)lastViewModel;
- (id)removeViewModel:(id)arg1;
- (id)updateViewModel:(id)arg1;
- (void)addViewModel:(id)arg1;
- (double)heightForViewModelAtIndex:(long long)arg1;
- (struct CGSize)bubbleSize;
- (id)initWithDelegate:(id)arg1 gestureHandler:(id)arg2;
- (id)initWithDelegate:(id)arg1 parentVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
