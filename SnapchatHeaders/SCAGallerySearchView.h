//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAGallerySearchView : SCAUserNotTrackedEvent <MapSerializable, NSCopying>
{
    long long source;
    NSString *sourcePage;
    NSString *page;
    NSString *pageUrl;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getPageUrl;
- (void)setPageUrl:(id)arg1;
- (id)getPage;
- (void)setPage:(id)arg1;
- (id)getSourcePage;
- (void)setSourcePage:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

