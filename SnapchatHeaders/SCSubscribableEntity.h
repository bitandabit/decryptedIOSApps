//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSubscribableContent-Protocol.h"

@class NSString;

@interface SCSubscribableEntity : NSObject <SCSubscribableContent>
{
    unsigned long long _subscribeState;
}

@property(nonatomic) unsigned long long subscribeState; // @synthesize subscribeState=_subscribeState;
- (id)entityId;
- (id)entityType;
- (id)posterName;
- (id)tileIdForTileCollection;
- (_Bool)supportsSubscription;
- (_Bool)isSubscribed;
- (_Bool)isUnsubscribed;
- (id)initWithUniqueName:(id)arg1 entityType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
