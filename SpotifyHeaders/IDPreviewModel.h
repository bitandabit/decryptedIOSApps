//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDFlushable.h"
#import "IDHmiServiceLifecycleProtocol.h"

@class IDTableData, IDWidgetHmiService, NSString;

@interface IDPreviewModel : NSObject <IDHmiServiceLifecycleProtocol, IDFlushable>
{
    _Bool _dirty;
    long long _identifier;
    unsigned long long _type;
    IDTableData *_tableData;
    IDWidgetHmiService *_widgetHmiService;
}

+ (id)new;
+ (id)invalidModel;
+ (id)emptyPreviewModelWithId:(long long)arg1 type:(unsigned long long)arg2;
@property __weak IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) IDTableData *tableData; // @synthesize tableData=_tableData;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (_Bool)updateTableData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithId:(long long)arg1 type:(unsigned long long)arg2 tableData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

