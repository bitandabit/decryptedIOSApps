//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAFeedEventBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long pageType;
    NSString *pageTypeSpecific;
    NSString *pageSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getPageSessionId;
- (void)setPageSessionId:(id)arg1;
- (id)getPageTypeSpecific;
- (void)setPageTypeSpecific:(id)arg1;
- (long long)getPageType;
- (void)setPageType:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

