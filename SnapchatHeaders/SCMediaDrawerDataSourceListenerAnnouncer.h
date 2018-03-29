//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMediaDrawerDataSourceListener-Protocol.h"

@interface SCMediaDrawerDataSourceListenerAnnouncer : NSObject <SCMediaDrawerDataSourceListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMediaDrawerDataSourceListener>, std::__1::allocator<__weak id<SCMediaDrawerDataSourceListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mediaListDidChangeAtIndexes:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)description;

@end
