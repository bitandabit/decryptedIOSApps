//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAGallerySearchResult : SCAUserNotTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *isSimilar;
    NSNumber *resultIndex;
    NSNumber *searchTermLength;
    NSNumber *resultTapCount;
    long long resultMatchType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getResultMatchType;
- (void)setResultMatchType:(long long)arg1;
- (long long)getResultTapCount;
- (void)setResultTapCount:(long long)arg1;
- (long long)getSearchTermLength;
- (void)setSearchTermLength:(long long)arg1;
- (long long)getResultIndex;
- (void)setResultIndex:(long long)arg1;
- (_Bool)getIsSimilar;
- (void)setIsSimilar:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

