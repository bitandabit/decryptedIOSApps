//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMomentsOptInEventModel;

@protocol SCMomentsOptInViewDelegate <NSObject>
- (void)dismissMomentsOptIn;
- (void)didUpdateSubscription:(_Bool)arg1 optInEvent:(SCMomentsOptInEventModel *)arg2 failure:(void (^)(SCMomentsOptInEventModel *, _Bool))arg3;
@end

