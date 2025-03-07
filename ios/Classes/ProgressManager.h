//
//  EMProgressManager.h
//  im_flutter_sdk
//
//  Created by 杜洁鹏 on 2022/5/23.
//

#import "Wrapper.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProgressManager : Wrapper
- (void)sendDownloadSuccessToFlutter:(NSString *)fileId path:(NSString *)savePath;
- (void)sendDownloadProgressToFlutter:(NSString *)fileId progress:(int)progress;
- (void)sendDownloadErrorToFlutter:(NSString *)fileId error:(EMError *)error;
@end

NS_ASSUME_NONNULL_END
