//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAProfileUserFriending : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *hasDisplayName;
    NSNumber *withDisplayPic;
    long long method;
    long long action;
    long long pageName;
    long long addSource;
    long long storyType;
    NSString *page;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getPage;
- (void)setPage:(id)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getAddSource;
- (void)setAddSource:(long long)arg1;
- (long long)getPageName;
- (void)setPageName:(long long)arg1;
- (long long)getAction;
- (void)setAction:(long long)arg1;
- (long long)getMethod;
- (void)setMethod:(long long)arg1;
- (_Bool)getWithDisplayPic;
- (void)setWithDisplayPic:(_Bool)arg1;
- (_Bool)getHasDisplayName;
- (void)setHasDisplayName:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

