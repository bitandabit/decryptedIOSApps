//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchActionHandling-Protocol.h"

@class NSString;
@protocol SCCheetahStoriesTabActionHandler;

@interface SCCheetahStoriesTabActionHandler : NSObject <SCSearchActionHandling>
{
    id <SCCheetahStoriesTabActionHandler> _delegate;
}

@property(nonatomic) __weak id <SCCheetahStoriesTabActionHandler> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

