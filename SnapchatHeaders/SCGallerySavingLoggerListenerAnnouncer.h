//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGallerySavingLoggerListener-Protocol.h"

@class NSString;

@interface SCGallerySavingLoggerListenerAnnouncer : NSObject <SCGallerySavingLoggerListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCGallerySavingLoggerListener>, std::__1::allocator<__weak id<SCGallerySavingLoggerListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gallerySavingLogger:(id)arg1 didLogGeofilterDirectSnapSaveEventForLensId:(id)arg2;
- (void)gallerySavingLogger:(id)arg1 didLogDirectSnapSaveEventForLensId:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
