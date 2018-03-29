//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface GCKCircularByteBuffer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    char *_end;
    char *_readPos;
    char *_writePos;
    char *_readMark;
    _Bool _empty;
}

- (void).cxx_destruct;
- (id)description;
- (void)writeNextByteUnchecked:(unsigned char)arg1;
- (unsigned char)readNextByteUnchecked;
- (void)bumpWritePosBy:(unsigned long long)arg1;
- (void)bumpReadPosBy:(unsigned long long)arg1;
- (unsigned long long)writeExtent;
- (unsigned long long)readExtent;
@property(readonly, nonatomic) unsigned long long availableToWrite;
@property(readonly, nonatomic) unsigned long long availableToRead;
- (void)rewindReadPosition;
- (void)markReadPosition;
- (void)clear;
- (long long)fillWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)writeInt64:(unsigned long long)arg1;
- (_Bool)writeInt32:(unsigned int)arg1;
- (_Bool)writeShort:(unsigned short)arg1;
- (_Bool)writeByte:(unsigned char)arg1;
- (_Bool)writeData:(id)arg1;
- (unsigned long long)writeBytes:(const char *)arg1 count:(unsigned long long)arg2 partialWriteOK:(_Bool)arg3;
- (long long)drainWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)readInt64:(unsigned long long *)arg1;
- (_Bool)readInt32:(unsigned int *)arg1;
- (_Bool)readShort:(unsigned short *)arg1;
- (_Bool)readByte:(char *)arg1;
- (_Bool)readData:(id)arg1;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2 partialReadOK:(_Bool)arg3;
- (_Bool)isFull;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long capacity;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

