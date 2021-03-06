//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchActionButtonViewModel, SCSearchActionModel;

@interface SCQuickAddFriendViewModel : NSObject <NSCopying>
{
    _Bool _isDismissing;
    NSString *_username;
    NSString *_displayName;
    NSString *_suggestedReason;
    SCSearchActionModel *_dismissActionModel;
    SCSearchActionButtonViewModel *_actionButtonViewModel;
}

@property(readonly, nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *actionButtonViewModel; // @synthesize actionButtonViewModel=_actionButtonViewModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *dismissActionModel; // @synthesize dismissActionModel=_dismissActionModel;
@property(readonly, copy, nonatomic) NSString *suggestedReason; // @synthesize suggestedReason=_suggestedReason;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 suggestedReason:(id)arg3 dismissActionModel:(id)arg4 actionButtonViewModel:(id)arg5 isDismissing:(_Bool)arg6;

@end

