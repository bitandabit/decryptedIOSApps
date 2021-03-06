//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class Friend, NSString;

@interface SCSearchInviteFriendIntent : NSObject <SCSearchIntent>
{
    Friend *_friendObj;
    CDUnknownBlockType _updateBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) Friend *friendObj; // @synthesize friendObj=_friendObj;
- (void).cxx_destruct;
- (id)initWithFriend:(id)arg1 updateInviteButtonBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

