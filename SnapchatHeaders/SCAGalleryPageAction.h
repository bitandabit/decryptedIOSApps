//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAGalleryPageAction : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long page;
    long long pageName;
    long long action;
    NSString *lagunaTransferBatchId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLagunaTransferBatchId;
- (void)setLagunaTransferBatchId:(id)arg1;
- (long long)getAction;
- (void)setAction:(long long)arg1;
- (long long)getPageName;
- (void)setPageName:(long long)arg1;
- (long long)getPage;
- (void)setPage:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

