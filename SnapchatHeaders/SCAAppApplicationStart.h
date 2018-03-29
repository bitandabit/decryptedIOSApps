//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCAAppApplicationStart : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long openState;
    long long source;
    long long deepLinkSource;
}

- (id)asDictionary;
- (long long)getDeepLinkSource;
- (void)setDeepLinkSource:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getOpenState;
- (void)setOpenState:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

