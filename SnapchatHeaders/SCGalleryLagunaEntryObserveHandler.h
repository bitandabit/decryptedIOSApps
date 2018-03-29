//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, SCGalleryEntry, SCObserving;

@interface SCGalleryLagunaEntryObserveHandler : NSObject
{
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id <SCGalleryEntry> _entry;
    id <SCObserving> _dataObserveContext;
}

@property(retain, nonatomic) id <SCObserving> dataObserveContext; // @synthesize dataObserveContext=_dataObserveContext;
@property(retain, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)performWithEntry:(id)arg1 changedKeys:(id)arg2;
- (void)invalidate;
- (id)initWithEntry:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;

@end
